section "s08_pl_000"{
    int var0;
    Background_Bg_GS2("BG_EX141_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "What should I pray for this year?");
    Message_MsgSel("Love", "Health", "Academics");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "A lover...");
        Message_Sele_Man(8);
        var0 = Message_Sele_Man_Result();
        if (var0 == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Saeki＊＊｝.");
            Parameter_AddCh1Param(1, 61, 3);
            }
        else if (var0 == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Shiba＊＊｝.");
            Parameter_AddCh1Param(2, 61, 3);
            }
        else if (var0 == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Hikami＊＊｝.");
            Parameter_AddCh1Param(3, 61, 3);
            }
        else if (var0 == 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Hariya＊＊｝.");
            Parameter_AddCh1Param(4, 61, 3);
            }
        else if (var0 == 5){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Chris＊＊｝.");
            Parameter_AddCh1Param(5, 61, 3);
            }
        else if (var0 == 6){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Amachi＊＊｝.");
            Parameter_AddCh1Param(6, 61, 3);
            }
        else if (var0 == 7){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Wakaouji＊＊｝.");
            Parameter_AddCh1Param(7, 61, 3);
            }
        else if (var0 == 8){
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to get along more with\n｛Masaki＊＊｝.");
            Parameter_AddCh1Param(8, 61, 3);
            }
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "I want to be healthy.");
        Parameter_AddPl1Param(22, #15);
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "I want my grades to get higher.");
        Parameter_AddPl1Param(16, 15);
        break ;
        }
    Voice_PlayVoice("S0800000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("？？？", "I shall grant your wish.");
    SoundEffect_PlayStream(3, "SS_T_00_130_M00");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Huh?\nIt somehow feels like my wish was\nfulfilled...");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
