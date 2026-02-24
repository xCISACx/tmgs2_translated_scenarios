section "h26_m3_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("H2603000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You did it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, we won!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H2603000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I will certainly report the\npotential of the Lacrosse Club.\nI will write that you played\nsplendidly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad we won!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("H2603000_C00200", 3, "H2603000_C00201");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The Lacrosse Club won.\nCongratulations,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Hikami＊＊｝!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 5);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2603000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "From where I was watching, the\nbrightest person in this game was...\nyou.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2603000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Would it be okay if I came to watch\nmore games...?\nIt is enjoyable cheering for you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad that I did my best!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("H2603000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What is the matter with you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... We lost.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2603000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I will write what I saw in the\nreport.\nThe Student Council is expecting\nsomething from the next match.\nPlease do your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that was unfortunate...)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("H2603000_C00700", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "How should I put it...\nThat was close,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nI'm sorry we lost, even though you\ncame to support us.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2603000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is not something to apologize\nfor.\nDidn't you fight a good fight?\nThe way you played was good.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2603000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Just use this experience in your\nnext match.\nThat is what practice is for, isn't\nit?\nI will keep supporting you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Hikami＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah～. I should have tried harder.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
