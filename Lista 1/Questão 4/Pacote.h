#include <iostream>
#include <string>
using namespace std;
class Pacote{
    private:
        string nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario, cepDestinatario;
        string nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente;
        float peso, precoKG;
    public:
        Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario,
        string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente,
        float peso, float precoKG);
        void setNomeDestinatario(string nomeDestinatario);
        void setEnderecoDestinatario(string enderecoDestinatario);
        void setCidadeDestinatario(string cidadeDestinatario);
        void setEstadoDestinatario(string estadoDestinatario);
        void setCepDestinatario(string cepDestinatario);
        void setNomeRemetente(string nomeRemetente);
        void setEnderecoRemetente(string enderecoRemetente);
        void setCidadeRemetente(string cidadeRemetente);
        void setEstadoRemetente(string estadoRemetente);
        void setCepRemetente(string cepRemetente);
        void setPeso(float peso);
        void setPrecoKG(float precoKG);

        string getNomeDestinatario();
        string getEnderecoDestinatario();
        string getCidadeDestinatario();
        string getEstadoDestinatario();
        string getCepDestinatario();
        string getNomeRemetente();
        string getEnderecoRemetente();
        string getCidadeRemetente();
        string getEstadoRemetente();
        string getCepRemetente();
        float getPeso();
        float getPrecoKG();
};