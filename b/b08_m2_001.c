section "b08_m2_001"{
    SoundEffect_PlayStream(3, "SS_T_00_057_M00");
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI'm the worst～)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I have to call\n｛Shiba＊＊｝ right away!)");
    }
