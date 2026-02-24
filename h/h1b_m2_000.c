section "h1b_m2_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 25) != 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Summer training camp starts today!\nLet's do our best!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Summer training camp starts today!\nLet's do our best!");
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nDo your best with training!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("H1B02000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You too.\nDon't think that you can be\nhalf-assed because it's training\ncamp.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'll do my best!)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nTraining camp has finally started!");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H1B02000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You're hyped up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nWhat about you,\n｛Shiba＊＊｝?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1B02000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, I'm not gonna lose to anyone.\nThat includes you, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright～! I'll do my best!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nTraining camp for the competition\nhas started.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1B02000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Right.\nI plan to do this with more\nenthusiasm than usual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "But forcing yourself is banned.\nGetting injured and stuff is absurd.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1B02000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You too.\nDon't wear your body out.");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H1B02000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nBecause you do more than your very\nbest for other people.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm fine!\nThanks, ｛Shiba＊＊｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(21);
    }
