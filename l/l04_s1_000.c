section "l04_s1_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(It'd be a waste to throw it out, so\nmaybe I should eat it myself?)");
    Message_MsgSel("Eat it myself.", "Give it to Yuu.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetPl1Param(39) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, it's yummy!!\nAs expected, I should have given it\nto someone...)");
            Parameter_InPl1Param(36, 0);
            Parameter_InPl1Param(37, 0);
            Parameter_AddPl1Param(22, #10);
            }
        else if (Parameter_GetPl1Param(39) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, that's that.)");
            Parameter_InPl1Param(36, 0);
            Parameter_InPl1Param(37, 0);
            Parameter_AddPl1Param(22, 0);
            }
        else if (Parameter_GetPl1Param(39) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI'm glad I didn't give it to\nanyone...)");
            Parameter_InPl1Param(36, 0);
            Parameter_InPl1Param(37, 0);
            Parameter_AddPl1Param(22, 10);
            }
        else if (Parameter_GetPl1Param(37) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, that's that.)");
            Parameter_InPl1Param(36, 0);
            Parameter_AddPl1Param(22, 0);
            }
        else if (Parameter_GetPl1Param(36) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI'm glad I didn't give it to\nanyone...)");
            Parameter_AddPl1Param(22, 0);
            }
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "(I should give it to Yuu-kun.\nI wonder if he'll be happy...)");
        SoundEffect_PlayStream(3, "SS_T_00_109_M00");
        Parameter_AddCh1Param(14, 86, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yuu-kun, are you there?");
        Voice_PlayVoice("L0414000_N00000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Yeah, I'll open my window.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        SoundEffect_PlayStream(3, "SS_T_00_109_M00");
        Background_Bg_GS2("BG_BH200_CO_1", #1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(14, "S1_17F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_14_000_D00", 127, 40);
        Voice_PlayVoice("L0414000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "What's up, Sis?\nDid your Valentine's Day go well?");
        Message_Who(0);
        Message_MsgDisp("主人公", "......... Yeah.\nAnyway, this is for you, Yuu-kun.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("L0414000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Yay. Wait a second. I'll come over!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(14, "NON");
        if (Parameter_GetPl1Param(39) == 1){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(14, "S1_04F", 0);
            var0 = Parameter_GetPl1Param(12);
            switch (var0){
                case 0:
                Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
                break ;
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("L0414000_N00600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "This is...\nthe chocolate you made yesterday?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("L0414000_N00700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "What the-- As I thought, it is.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Maybe!");
            Character_ChFace(0, 4, 0);
            Character_BlinkStart(14, 3, (#1));
            Voice_PlayVoice("L0414000_N00800", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Well, I'll accept it.");
            Character_BlinkStart(14, 0, (#1));
            Voice_PlayVoice("L0414000_N00900", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Yeah, it's yummy!\nYou're a genius, Sis! Thanks～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yuu-kun looks very glad.)");
            Parameter_InPl1Param(36, 0);
            Parameter_InPl1Param(37, 0);
            Parameter_AddCh1Param(14, 330, 1);
            }
        else if (Parameter_GetPl1Param(39) == 2){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(14, "S1_04F", 0);
            var0 = Parameter_GetPl1Param(12);
            switch (var0){
                case 0:
                Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
                break ;
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("L0414000_N01000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "This is...\nthe chocolate you made yesterday?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("L0414000_N01100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "What the-- As I thought, it is.\nYou didn't have to be indirect about\nit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Well.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0414000_N01200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Thanks, I'll eat it later.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah.\nI'll just leave it like that.)");
            Parameter_InPl1Param(36, 0);
            Parameter_InPl1Param(37, 0);
            Parameter_AddCh1Param(14, 330, 1);
            }
        else if (Parameter_GetPl1Param(39) == 3){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(14, "S1_04F", 0);
            var0 = Parameter_GetPl1Param(12);
            switch (var0){
                case 0:
                Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
                break ;
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("L0414000_N01300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "This is from yesterday...?\nHey, what we made yesterday was\n\"chocolate\", right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? Yeah.");
            Character_BlinkStart(14, 2, (#1));
            Voice_PlayVoice("L0414000_N01400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Hmm, as I thought.\nNo, I'm happy of course, but...\nSis, did you try some?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I didn't.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("L0414000_N01500", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "...\nI think that you should work on your\ncooking skills.\nBecause it's me, I'll eat it,\nthough.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0414000_N01600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "But... thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yuu-kun is happy... I think?)");
            Parameter_InPl1Param(36, 0);
            Parameter_InPl1Param(37, 0);
            Parameter_AddCh1Param(14, 330, 1);
            }
        else if (Parameter_GetPl1Param(37) == 1){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(14, "S1_04F", 0);
            var0 = Parameter_GetPl1Param(12);
            switch (var0){
                case 0:
                Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
                break ;
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("L0414000_N00500", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Wow, it's from that store!\nDid you line up to buy it?\nThis chocolate is yummy.\nThanks, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yuu-kun looks glad.)");
            Parameter_InPl1Param(36, 0);
            Parameter_AddCh1Param(14, 330, 1);
            }
        else if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(14, "S1_04F", 0);
            var0 = Parameter_GetPl1Param(12);
            switch (var0){
                case 0:
                Background_Bg_GS2("BG_HO200_WI_1", #1, #1, 0);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_WI_1", #1, #1, 0);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_WI_1", #1, #1, 0);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_WI_1", #1, #1, 0);
                break ;
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("L0414000_N00300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "... Are you treating me like a kid?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0414000_N00400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Well, this is also a form of\ninteraction with your neighbors.\nThanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He's happy... I think?)");
            Parameter_AddCh1Param(14, 330, 1);
            }
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_InPl1Param(36, 0);
    Parameter_InPl1Param(37, 0);
    Parameter_InPl1Param(39, 0);
    }
