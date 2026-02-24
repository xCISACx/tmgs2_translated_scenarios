section "h49_pl_000"{
    System_GlobalWork(0, 0, 0);
    if (Parameter_GetCh1Param(2, 25) == 1){
        Background_Bg_GS2("BG_SCA13_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "The first match for the Baseball\nClub is against the representatives\nfrom Hokkaido, Ranburyuu High\nSchool.");
        Message_CloseMsg();
        }
    else {
        Background_Bg_GS2("BG_SCA31_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "The first opposing team for the\nTrack and Field club is the\nrepresentatives from Hokkaido,\nRanburyuu High School.");
        Message_CloseMsg();
        }
    }
