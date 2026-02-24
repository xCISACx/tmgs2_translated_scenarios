section "h16_m3_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("H1603000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The Baseball Club did it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, they won!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H1603000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I will be able to write the report\nhappily.\nYou've worked hard with your\nmanagerial duties.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad they won...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "H1603000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That was good,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, they won!\nAs expected of our team!");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1603000_C00300", 3, "H1603000_C00301");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yeah, I know the strength of the\nplayers.\nAlso... ｛主人公｝.\nYour support was... good too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Geez, ｛Hikami＊＊｝.\nI'm embarrassed now.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1603000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Isn't it the t-truth...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Hikami＊＊｝!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("H1603000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I wonder what is happening with the\nBaseball Club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh, they lost...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H1603000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Reporting a loss is painful.\nAs the manager, you must feel that\nway too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("H1603000_C00700", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThat was unfortunate,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, they lost...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1603000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "But they showed people their hard\nwork.\nSo this was a good game.\nYou were able to find areas to focus\non, right?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1603000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nJust use this experience for your\nnext match, both you and the\nplayers....\nCheer up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right...\nBut that was unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
