section "w04_m5_000"{
    if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 549) == 1)){
        if (Parameter_GetCh1Param(5, 130) >= 0){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_??F", 0);
            Voice_PlayVoice("", 5, "W0405000_E00000");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.\nOver here, over here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nYou came along.");
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("W0405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nWhen I heard you were coming, I\ncould hardly wait.\nTreat me nice all day long▼");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 549) == 0)){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_Chara_GS2(5, "M5_??F", 0);
            Voice_PlayVoice("W0405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Oh.\nYou're one of the party members\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nI'm sorry for being late.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I know being late is not good, but\nI'm letting this go just for today.");
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("W0405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nSomeone seriously can't wait to be\nkissed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh!?");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_??F", 0);
            Voice_PlayVoice("", 5, "W0405000_E00000");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.\nOver here, over here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nYou came along.");
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("W0405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nWhen I heard you were coming, I\ncould hardly wait.\nTreat me nice all day long▼");
            }
        Parameter_InCh1Param(5, 549, 42);
        }
    Character_Chara_GS2(5, "NON");
    }
