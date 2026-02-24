section "h26_m4_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H2604000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You did quite well.\nYou're not just slow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, that's mean.\nBut thanks, ｛Hariya＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. I'm glad I tried my best!)");
            }
        else {
            Voice_PlayVoice("H2604000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're amazing...\nYou're a fast runner, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Did that surprise you?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H2604000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I couldn't even take me eyes\noff...\nNo!");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H2604000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "A-Anyway, I'm glad that you guys\nwon!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay. I'm glad I tried my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H2604000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, you guys lost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("H2604000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, do your best next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        else {
            Voice_PlayVoice("H2604000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, you lost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H2604000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nI think you guys are on the right\ntrack.\nWin next time, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("H2604000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "And cheer up!\nDon't keep moping about it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Hariya＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
