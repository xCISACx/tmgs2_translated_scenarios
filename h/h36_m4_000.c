section "h36_m4_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H3604000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You won! You're amazing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. I'm glad I did my best!)");
            }
        else {
            Voice_PlayVoice("H3604000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You won! You're amazing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3604000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You were way in front!\nAs expected of my... Ahh!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3604000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Anyway! That was good.\nDo your best next time, too!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. I'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H3604000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Well, it couldn't be helped.\nDo your best next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        else {
            Voice_PlayVoice("H3604000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Bad luck.... Don't be so depressed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("H3604000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nWhen you're like that, I feel weak\nas well.\nSo hurry up and smile.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I will try harder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
