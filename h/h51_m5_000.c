section "h51_m5_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I'll join the Art Club!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H5105000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "... That is all.\nEveryone, please do your best so\nthat you can improve.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I understand.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    if (Parameter_GetCh1Param(5, 514) == 0){
        Message_CloseMsg();
        Screen_WipeOut(2);
        System_Call_GS2("A02", "M5", 200);
        }
    else {
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Voice_PlayVoice("H5105000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hello.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Hello.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H5105000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Welcome to the Art Club!\nI was waiting for a cute girl like\nyou to join.");
            Voice_PlayVoice("H5105000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Let's have fun every day.\nI'm looking forward to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah. Me too.");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("H5105000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hello.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nI'm looking forward to it.");
            Voice_PlayVoice("H5105000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nMaybe I should ask something of you\nright now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What?");
            Voice_PlayVoice("H5105000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What do you mean what? You know...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll have to decline for t-today.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5105000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... I haven't said anything, yet.\nBut you're right.\nIt's still your first day here.");
            Voice_PlayVoice("H5105000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll ask you again next time.\nI look forward to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what he wanted me to\ndo...)");
            }
        else {
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!");
            Voice_PlayVoice("H5105000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I've been waiting.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H5105000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You joined the club. I'm very happy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's because you're always feeling\nhappy.");
            Voice_PlayVoice("H5105000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... But I really am happy.\nLet's do our best together.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm looking forward to it.");
            }
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        }
    }
