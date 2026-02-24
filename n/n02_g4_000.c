section "n02_g4_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(13, "G4_01F", 0);
            Voice_PlayVoice("", #1, "N0213000_M00000");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝.\nCongratulations～!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("N0213000_M00100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "This is very amazing.\nYou really did your best, didn't\nyou?\nWell, let me be proud, too!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Mizushima＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_01F", 0);
            Voice_PlayVoice("N0213000_M00200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "The top rank. Congratulations.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.\nThank you!");
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0213000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "...\nSo, you're giving up on Chris-kun?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nThis and that are different things!)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(13, "G4_01F", 0);
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("N0213000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You're very smart now. Sis is happy!\nMaybe I should also try studying.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will try harder!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_01F", 0);
            Voice_PlayVoice("N0213000_M00500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Your results were pretty good,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.\nThank you!");
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0213000_M00600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I'm not sure if this appeals to\nChris-kun...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I already know that!)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(13, "G4_01F", 0);
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("N0213000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Don't you wish result announcements\nwere only for bright people?\n*Sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I need to try a little harder...)");
            }
        else {
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_01F", 0);
            Voice_PlayVoice("N0213000_M00800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("N0213000_M00900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I want to say something, but I can't\nthink of anything...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Then maybe it shouldn't come out...\nOkay, I need to try harder!)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(13, "G4_01F", 0);
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("N0213000_M01000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Really... cheer up! Alright?\nLet's try again.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, it won't help if I feel\ndown!)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(13, "NON");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_01F", 0);
            Voice_PlayVoice("N0213000_M01100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝...");
            Character_ChFace(0, 7, 0);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0213000_M01200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Hahaha.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... Well, I can't give up!!)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(13, "NON");
                }
            }
        }
    Parameter_AddCh1Param(13, 86, 1);
    }
