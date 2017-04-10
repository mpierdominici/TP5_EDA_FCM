class Client
{
public:
	void sendRRQ();
	void sendWRQ();
	void sendACK();
	void sendData();
protected:
	genericFSM * dipatcher;
}