section "o03_m2_010"{
    if (Parameter_GetPl1Param(312) != 2){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302010_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Are you looking for a partner?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Voice_PlayVoice("O0302010_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "If it's okay, I'll accompany you\nsince I'm free at the moment.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302010_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Need a partner?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
            Voice_PlayVoice("O0302010_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... If you do, can you run? With me.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
            Voice_PlayVoice("O0302010_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "A three-legged race...\nDo you want to participate with me?\nI have no one to partner with.");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302010_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What happened?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm looking for someone to\nparticipate with...");
            Voice_PlayVoice("O0302010_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "If it's okay, I'll participate with\nyou since I'm free at the moment.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Please do!");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("O0302010_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Don't get too close.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0302010_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Looking for a partner?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
            Voice_PlayVoice("O0302010_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Terrific, I'll participate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Please do!");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0302010_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... But don't get too close.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
            Voice_PlayVoice("O0302010_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "A three-legged race...\nDo you want to participate with me?\nI have no one to partner with.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, please do!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0302010_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm a little nervous...");
            }
        }
    Message_CloseMsg();
    Character_Chara_GS2(2, "NON");
    }
