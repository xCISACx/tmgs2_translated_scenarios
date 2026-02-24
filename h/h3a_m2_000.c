section "h3a_m2_000"{
    if (Parameter_GetBkParam(3, 52) >= 320){
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A02000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Congrats. That was great.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!\nI'm so happy that I don't feel the\nexcitement and I don't believe it...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3A02000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Believe that you won with your own\nstrength.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, right!\nThanks, ｛Shiba＊＊｝!");
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A02000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Just seeing that face makes me feel\nglad, too....\nI'm really glad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad we won...\nBut not without\n｛Shiba＊＊｝'s support and\nthe things he said!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A02000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You were close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A02000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou know, you still gain from\nlosing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H3A02000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Only you understand this.\nOnly you can look for yourself.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3A02000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Above all, it doesn't mean that\neverything you've done up until now\ndisappears.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A02000_B01200", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So lift your head up, okay?\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Okay.\nThank you, ｛Shiba＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right...\nI'm glad I stayed in the Track and\nField Club.)");
            }
        }
    Parameter_AddCh1Param(2, 86, 1);
    }
