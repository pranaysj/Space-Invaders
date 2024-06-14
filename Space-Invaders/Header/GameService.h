#pragma onece

class GameService{
    private :
        void Initialize();
        void Destory();
    public :
        GameService();
        ~GameService();

        void Ignite();
        void Update();
        void Render();
        bool IsRunning();
};