def processo_pagamento():
    pass

def log_error(a):
    pass

try:
    processo_pagamento()
except ConnectionError as e:
    log_error("Server down")  # Salva o erro primeiro
    raise  # Somente então manda o erro para o proximo nivel do programa.