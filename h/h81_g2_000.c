section "h81_g2_000"{
    if (Parameter_GetCh1Param(11, 514) != 1){
        System_Call_GS2("A02", "G2", 200);
        }
    else {
        Parameter_AddCh1Param(11, 86, 1);
        if (System_GlobalWork(0, 1) == 0){
            Character_ChFace(0, 0, 0);
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_Chara_GS2(11, "G2_01F", 0);
                }
            else {
                Character_Chara_GS2(11, "G2_01F", 0);
                }
            }
        else if (System_GlobalWork(0, 1) == 1){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_01F", 0);
                Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                }
            }
        if (Parameter_GetCh1Param(11, 513) != 1){
            Voice_PlayVoice("", #1, "H7111000_K00000");
            Message_Who(11);
            Message_MsgDisp("Onoda", "｛主人公｝.\nWelcome to the Student Council.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.\nI look forward to it.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7111000_K00100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Me too. I am glad that you came.\nLet's both do our best together!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("", #1, "H7111000_K00200");
            Message_Who(11);
            Message_MsgDisp("Onoda", "｛主人公｝.\nWhat is the matter? Ah! ...\nCould it be?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I joined the Student Council.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(11, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H7111000_K00300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... I see.\nThat is how you're going to do it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh...!?");
            Character_BlinkStart(11, 0, (#1));
            Voice_PlayVoice("H7111000_K00400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "It's fine. But work is work.\nI will not let my personal feelings\nget in the way.");
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7111000_K00500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Let me see your abilities.\nI look forward to it. Hahaha...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah. I look forward to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It seems like she's very driven by\nher personal feelings...)");
            }
        }
    }
