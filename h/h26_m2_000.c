section "h26_m2_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("H2602000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Surprisingly, you can move around\nquite well.\nI was surprised.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... What do you mean by that?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2602000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Haha. I'm glad you won.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! I'm glad I did my best!)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "H2602000_B00200");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝. You did it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm so happy that we won!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H2602000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nJust being able to see you try your\nhardest here is enough for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("H2602000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'm glad you won.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Thanks, ｛Shiba＊＊｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. I'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Voice_PlayVoice("H2602000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It was a close game.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H2602000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou have to practice more so that\nyou'll win the next game.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...\nI have to try harder!)");
            }
        else {
            Voice_PlayVoice("H2602000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That was bad luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2602000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou didn't play terribly, so there's\nno need to be so down.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Really?");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 2, 3);
            Voice_PlayVoice("H2602000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. Don't be so depressed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
