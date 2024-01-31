import requests
import json
import os


if 'SNAP' in os.environ:
    #IP address no real
    ip_addr = "localhost"
else:
    #IP address no ambiente de desenvolvimento
    ip_addr = "10.0.2.2:8443"

def convertTimestampToJson(timestampData):
    # Load json
    json_str = '{}'
    jsondata = json.loads(json_str)

    # Converter o novo timestamp para o formato ISO 8601
    # Atualizar o valor do campo "timestamp" no JSON
    jsondata["timestamp"] = timestampData.get_datetime().isoformat()
    
    # Converter de volta para JSON
    json_atualizado = json.dumps(jsondata)

    return json_atualizado

def WriteWithRestApi(timestampData):
    # get bearer token
    bearer_addr = "https://"+ip_addr+"/identity-manager/api/v2/auth/token"
    command_data = {"name":"boschrexroth","password":"boschrexroth"}

    print('endereço: ' + bearer_addr)

    #get token
    res = requests.post(bearer_addr, json=command_data, verify=False)
    token = res.json()["access_token"]
    print('token de acesso: ' + token)

    # send command
    jsonTime = json.loads(convertTimestampToJson(timestampData))

    print('json : ' + str(jsonTime))
    
    res = requests.put('https://' + ip_addr + '/system/api/v1/time/settings',
    json= jsonTime,
    headers={ 'Authorization': 'Bearer ' + token },
    verify=False)

    print('Resposta API: ' + str(res))

