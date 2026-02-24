section "n02_m1_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Voice_PlayVoice("N0201000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you the at the top of the class?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Amazing...\nOr should I say, who are you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("N0201000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Were you intending to win?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Were you intending to win?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, not really?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("N0201000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Wha-What's with that composure...\nI see, I've lost...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else {
            Voice_PlayVoice("N0201000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I lost...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Congratulations. You're amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!\n｛Saeki＊＊｝ too, right?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0201000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, that's cheeky...\nWell, I'll let it go just for this\nday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Voice_PlayVoice("N0201000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're actually pretty smart, aren't\nyou?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Since when have you been studious?\nOh, you're...\nare you part of a study review\ngroup?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was never sneaking!\nBut my hard work paid off!)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("N0201000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well done...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hold it, no scheming.\nIsn't the high ranking, group-wise?");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I will not give up!!)");
            }
        else {
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Do you get the impression of worthy\nopponents?\nThe two of us.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, seems that way.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0201000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, why don't we aim together for\nthe top?\nIt's a whole different level of\ndifficulty.\nWhat do you say?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure, you're on!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay! Let's aim for the top!)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ooh... It seems pretty ordinary.\nWell, keep on trying.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nI have to try a little harder.)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, well.\nThen it's meant to be like this....\nGood.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nI have to try a little harder.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Don't mind it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh!?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0201000_A01700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, studying is...\nLook, how should I say this on your\npart...?");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nI have to try a little harder.)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A01800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0201000_A01900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Pfft.");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nNo matter what, I must try a little\nharder...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("N0201000_A02000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're turning out to be great...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝...");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A02100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I now no longer feel in mood to pun\nyou.\nBe stronger, okay?");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nNo matter what, I must try a little\nharder...)");
            }
        else {
            Voice_PlayVoice("N0201000_A02200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("N0201000_A02300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nI often lose track of the meaning of\nstudying...");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0201000_A02400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "There's only one way to make it\nenjoyable.\nHey, if you don't know, I'll teach\nyou.\nJust try hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nNo matter what, I must try a little\nharder...)");
            }
        }
    Parameter_AddCh1Param(1, 86, 1);
    }
