section "h12_pl_001"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Huh?\nI have a feeling that today was a\nclub practice day...");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
