section "q17_m4_000"{
    if (System_GlobalWork(0, 1) == 1){
        if (System_GlobalWork(23, 1) == 4){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, that was fun!\nThank you, ｛Hariya＊＊｝.");
            Voice_PlayVoice("FD_04_060_00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Anyway, it's nothing special.\nBesides, was I worth it? Seriously.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("FD_04_060_00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I see. Well, that's good.\nThen we're heading back!");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("Q0804000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "How was it? Today was fun, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nThanks for asking me out,\n｛Hariya＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0804000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah!\nIn that case, on the next free day,\nwould you like go out together?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'd love to!");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("Q0804000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Great! Then be here, again!");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("Q0804000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, I seriously enjoyed that!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Me too, that was really fun!\nThank you for asking me out.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0804000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Yeah, sure.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("Q0804000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Hey.\nWhat are your plans for tomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Still haven't given it any thought.\nI'm not sure.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("Q0804000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well then, reserve it....\nLeave it free.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Reservation confirmed.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("Q0804000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha, what's with that!");
            }
        }
    else if (System_GlobalWork(0, 1) == 2){
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for going out with me.\nIt was fun!");
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("Q0804000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Sure!\nThe day after tomorrow, I've got no\nplans.\nSo, would you like to go out\ntogether?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, okay!");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("Q0804000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "So then, the day after tomorrow,\nokay?");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for today. That was fun.");
            Voice_PlayVoice("Q0804000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Well, I had fun, too.\nFor once, I should say thanks.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("Q0804000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Thank you!\nHey, would you like to go out with\nme also on the day after tomorrow?\nI never get bored with you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, okay!");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("Q0804000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "So, the day after tomorrow, let's\nmeet at this place, again!");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "The day went so fast.\nI had loads of fun～!");
            Voice_PlayVoice("Q0804000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nYou seriously do forget the time!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for going out with me,\n｛Hariya＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0804000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I should be the one thanking you!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0804000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nWell, about the day after\ntomorrow...\nI'd like to go out with you.\nIs that okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'd love to!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0804000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Great! Aah, I can hardly wait～.\nSo, the day after tomorrow then!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
