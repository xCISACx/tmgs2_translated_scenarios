section "w04_m6_000"{
    if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 549) == 1)){
        Character_Chara_GS2(6, "M6_??F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("", 6, "W0406000_F00000");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝. Hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝!");
            Voice_PlayVoice("W0406000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you for inviting me.\nPlease treat me well today.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("", 6, "W0406000_F00200");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝. Hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝! ... Huh!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Whoa, he's hiding his true colors!\nI see, it's because I'm not\nalone...)");
            Voice_PlayVoice("W0406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you for inviting me.\nPlease treat me well today.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\n*Chuckles*");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 549) == 0)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(6, "M6_??F", 0);
            Voice_PlayVoice("W0406000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("W0406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai came, too. I see...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, thank you for inviting me\ntoday....\nHere I am.\nPlease treat me well today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Did ｛Amachi＊＊｝'s tone\nchange for a moment...?)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_Chara_GS2(6, "M6_??F", 0);
            Voice_PlayVoice("", 6, "W0406000_F00200");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝. Hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝! ... Huh!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Whoa, he's hiding his true colors!\nI see, it's because I'm not\nalone...)");
            Voice_PlayVoice("W0406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you for inviting me.\nPlease treat me well today.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\n*Chuckles*");
            }
        Parameter_InCh1Param(6, 549, 42);
        }
    Character_Chara_GS2(6, "NON");
    }
