from pdf2docx import Converter


def conversor():
    print("\n  Conversor *.pdf para *.docx")
    print("\n  Insira o diretorio do arquivo que deseja converter de *pdf:")
    print("  Exemplo: C:/Users/usuario/Downloads/nome_do_arquivo.pdf")
    print(" ",end = '')
    arquivo_pdf = input()
    print("\n  Insira o diretorio do arquivo que deseja receber o arquivo em *docx: ")
    print("  Exemplo: C:/Users/usuario/Downloads/nome_do_arquivo.docx")
    print(" ",end = '')
    arquivo_word = input()


    cv = Converter(arquivo_pdf)
    cv.convert(arquivo_word) 
    cv.close()
    print("\n  Arquivo convertido!")
    print("\n  Digite ""s"" ou ""S"" para sair ou qualquer tecla para continuar.")
   
while True:
    conversor()
    print(" ",end = '')
    resposta = input()
    if resposta == 's' or resposta == 'S':
        exit()