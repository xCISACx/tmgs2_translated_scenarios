section "n01_pl_000"{
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
    if (Parameter_GetPl1Param(13) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Final exams start tomorrow...\nTaking the exam while sick will be\npainful...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Final exams start tomorrow.\nI will do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
