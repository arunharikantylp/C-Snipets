main()
{
    int e_h,e_m,l_h,l_m;
    char vt;
    int et,lt,tt;
    scanf("%d%d%d%d",&e_h,&e_m,&l_h,&l_m);
    scanf("%*c%c",&vt);
    et=e_h*60+e_m;
    lt=l_h*60+l_m;
    tt=lt-et/60;
    if(vt == 't')
    {
        if(tt<=8)
        {
            pc=tt*10;

}        else
            pc=8*10+(tt-8)*20;
    }
    else if(vt=='f')
    {
         if(tt<=8)
            pc=tt*20;
        else
            pc=8*20+(tt-8)*30;
    }

}
