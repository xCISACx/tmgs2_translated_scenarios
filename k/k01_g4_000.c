section "k01_g4_000"{
    Character_BlinkStart(13, 1, (#1), 1);
    Character_BlinkStart(13, 1, (#1), 2);
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
    Message_MsgDisp("主人公", "Ah, that reminds me...\nIt's almost ｛Mizushima＊＊｝'s\nbirthday!\nWhat about a present?");
    Message_MsgSel("Go and buy a present.", "Don't give her anything.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "I have to go and buy a present right\naway!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Background_Bg_GS2("BG_NE100_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "What should I buy?");
        if (Parameter_GetPl1Param(23) == 0){
            Parameter_InCh1Param(13, 67, 0);
            Parameter_AddCh1Param(13, 60, #2);
            }
        if (Parameter_GetPl1Param(338) == 1){
            Message_MsgSel("Constellation Plate 1 Rich", "Halo Shampoo 1 Rich", "Cosplay Blueprints 1 Rich");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(13, 67, 1);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(13, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 1:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(13, 67, 2);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(13, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 2:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(13, 67, 3);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(13, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                }
            }
        else if (Parameter_GetPl1Param(338) == 2){
            Message_MsgSel("Horoscope Chart 1 Rich", "Lace Handkerchief 1 Rich", "Cooking for Dummies 1 Rich");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(13, 67, 1);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(13, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 1:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(13, 67, 2);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(13, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                case 2:
                if (Parameter_GetPl1Param(23) >= 1){
                    Parameter_InCh1Param(13, 67, 3);
                    Parameter_AddPl1Param(23, #1);
                    SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(13, 67, 0);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                    }
                break ;
                }
            }
        else if (Parameter_GetPl1Param(338) == 3){
            while (var0 < 1){
                if (Parameter_GetPl1Param(23) >= 3){
                    Message_MsgSel("Miracle Stone Earrings 3 Rich", "Piano Sonata Piano Scores 1 Rich", "Issue of \"Rich Girl Life\" 1 Rich");
                    switch (Message_TextSelect()){
                        case 0:
                        Parameter_InCh1Param(13, 67, 1);
                        Parameter_AddPl1Param(23, #3);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                        var0 = 1;
                        break ;
                        case 1:
                        Parameter_InCh1Param(13, 67, 2);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                        var0 = 1;
                        break ;
                        case 2:
                        Parameter_InCh1Param(13, 67, 3);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                        var0 = 1;
                        break ;
                        }
                    }
                else if (((Parameter_GetPl1Param(23) == 1) || (Parameter_GetPl1Param(23) == 2))){
                    Message_MsgSel("Miracle Stone Earrings 3 Rich", "Piano Sonata Piano Scores 1 Rich", "Issue of \"Rich Girl Life\" 1 Rich");
                    switch (Message_TextSelect()){
                        case 0:
                        Parameter_InCh1Param(13, 67, 0);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Crap!\nI can't buy it because I don't have\nenough money...");
                        break ;
                        case 1:
                        Parameter_InCh1Param(13, 67, 2);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                        var0 = 1;
                        break ;
                        case 2:
                        Parameter_InCh1Param(13, 67, 3);
                        Parameter_AddPl1Param(23, #1);
                        SoundEffect_PlayStream(3, "SS_T_00_037_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "I got her a present.\nIt would be nice if she liked it!");
                        var0 = 1;
                        break ;
                        }
                    }
                else if (Parameter_GetPl1Param(23) == 0){
                    Parameter_InCh1Param(13, 67, 0);
                    Message_MsgSel("Miracle Stone Earrings 3 Rich", "Piano Sonata Piano Scores 1 Rich", "Issue of \"Rich Girl Life\" 1 Rich");
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
        Parameter_InCh1Param(13, 67, 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm～...\nIt'll probably be fine not buying\nher a present.");
        Parameter_AddCh1Param(13, 60, #2);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
