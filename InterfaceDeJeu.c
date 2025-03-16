    sfVideoMode mode= {1920, 1080,64}; //taille de l'interface du jeu
    sfRenderWindow *window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "My runner", sfResize| sfClose, NULL);
    if (!window)
        return 1;
//resire pour mofifier la taille de l'interface, mode pour dir qu'on veut les dimensions enumerees plus haut
    while(isRenderWindow_isOpen(window))
    {

        while(sRenderWindow_polEvent(window, &event))
        {

            if(event.type==sfClosed)
            {
                sfRenderWindow_close(window);
            }

        }
    }
