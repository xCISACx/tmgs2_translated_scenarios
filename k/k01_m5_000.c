section "k01_m5_000"{
    Character_BlinkStart(5, 1, (#1), 1);
    Character_BlinkStart(5, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0;
    int var1;
    var1 = Parameter_GetPl1Param(23);
    if (Parameter_ChkHoliday(2) == 0){
        Background_Bg_GS2("BG_EX100_?_1", 1, #1, 0);
        }
    else {
        int var2 = Parameter_GetPl1Param(12);
        switch (var2){
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
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, that reminds me...\nIt's almost ｛Chris＊＊｝'s\nbirthday!\nWhat about a present?");
    Message_MsgSel("Go and buy a present.", "Don't give him anything.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright, I'll go and buy a present▼");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Background_Bg_GS2("BG_NE100_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "What should I buy?");
        if (Parameter_GetPl1Param(23) == 0){
            Parameter_InCh1Param(5, 67, 0);
            Parameter_AddCh1Param(5, 61, 0);
            Parameter_AddCh1Param(5, 60, #1);
            Parameter_AddCh1Param(5, 62, 2);
            }
        if (Parameter_GetPl1Param(338) == 1){
            Message_MsgSel("DIY Stamp Set. 1 Rich", "\"How to Speak Japanese Well\".	1 Rich", "Top Quality Watercolor Brush. 1 Rich");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(5, 67, 1);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(5, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 2:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(5, 67, 2);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(5, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 1:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(5, 67, 3);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(5, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                }
            }
        else if (Parameter_GetPl1Param(338) == 2){
            Message_MsgSel("Decotora World. 1 Rich", "Acrylic Paint Set. 1 Rich", "Notes on how to Paint. 1 Rich");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(5, 67, 1);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(5, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 1:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(5, 67, 2);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(5, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 2:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(5, 67, 3);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(5, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                }
            }
        else if (Parameter_GetPl1Param(338) == 3){
            while (var0 < 1){
                if (Parameter_GetPl1Param(23) >= 3){
                    Message_MsgSel("Wall Art Collection. 3 Rich", "Low Grade #F100 Canvas. 1 Rich", "\"How To Converse in English\". 1 Rich");
                    switch (Message_TextSelect()){
                        case 0:
                        Parameter_InCh1Param(5, 67, 1);
                        Parameter_AddPl1Param(23, #3);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                        var0 = 1;
                        break ;
                        case 1:
                        Parameter_InCh1Param(5, 67, 2);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                        var0 = 1;
                        break ;
                        case 2:
                        Parameter_InCh1Param(5, 67, 3);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                        var0 = 1;
                        break ;
                        }
                    }
                else if (((Parameter_GetPl1Param(23) == 1) || (Parameter_GetPl1Param(23) == 2))){
                    Message_MsgSel("Wall Art Collection. 3 Rich", "Low Grade #F100 Canvas. 1 Rich", "\"How To Converse in English\". 1 Rich");
                    switch (Message_TextSelect()){
                        case 0:
                        Parameter_InCh1Param(5, 67, 0);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                        break ;
                        case 1:
                        Parameter_InCh1Param(5, 67, 2);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                        var0 = 1;
                        break ;
                        case 2:
                        Parameter_InCh1Param(5, 67, 3);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I've gotten him a present.\nI'll summon my courage to give it to\nhim～!");
                        var0 = 1;
                        break ;
                        }
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(5, 67, 0);
                    Message_MsgSel("Wall Art Collection. 3 Rich", "Low Grade #F100 Canvas. 1 Rich", "\"How To Converse in English\". 1 Rich");
                    switch (Message_TextSelect()){
                        case 0:
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                        var0 = 1;
                        break ;
                        case 1:
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                        var0 = 1;
                        break ;
                        case 2:
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                        var0 = 1;
                        break ;
                        }
                    }
                }
            }
        break ;
        case 1:
        Parameter_InCh1Param(5, 67, 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm～...\nIt'll probably be fine not buying\nhim a present.");
        Parameter_AddCh1Param(5, 61, 0);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 2);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
