section "o03_m6_010"{
    if (Parameter_GetPl1Param(312) != 6){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306010_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Are you alone, Senpai?\nI'm participating in the\nthree-legged race.\nIf it's okay, would you like to\npartner up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306010_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "At any rate, have you not decided on\na partner, either?\nIf you insist, I'll be your partner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, let's team up!");
            Voice_PlayVoice("O0306010_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please do not fall.\nI'll be embarrassed as your partner!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306010_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, there you are! I've found you!\nOur school years don't matter.\nCome on, Senpai. Be a team with me!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0306010_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Let's do our best, Senpai!\nSo as long as I'm here, we'll\ndefinitely win!");
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306010_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Are you alone, Senpai?\nI'm also joining in the three-legged\nrace.\nIf it's okay, do you want to form a\npair?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0306010_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "......... Please don't run into me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝?)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306010_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Are you alone, Senpai?\nI'm also joining in the three-legged\nrace.\nIf it's okay, do you want to form a\npair?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            }
        }
    Message_CloseMsg();
    Character_Chara_GS2(6, "NON");
    }
