section "i63_g1_000"{
    Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "I'm the new person,\n｛主人公姓名｝.\nI look forward to working with you.");
    Voice_PlayVoice("I6310000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Your shift is every Tuesday and\nThursday.\nI'm counting on you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I understand.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    if (Parameter_GetCh1Param(10, 514) == 0){
        System_Call_GS2("A02", "G1", 300);
        }
    else {
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(10, "G1_13F", 0);
            Voice_PlayVoice("I6310000_J00100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Huh... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Toudou＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I6310000_J00200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "So you were the new person.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nI look forward to working with you!");
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("I6310000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "I'm kinda the chief around here, so\nif there's anything you don't know,\nask me right away.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh, so you're the chief,\n｛Toudou＊＊｝.");
            Character_BlinkStart(10, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I6310000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well...\nThere are people here who are older\nthan me.");
            Voice_PlayVoice("I6310000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It seems like those guys are\nundependable.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I6310000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It's not a stretch to say that you\ncould be in my deputy chief\nposition.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh! No way, I'm still...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("I6310000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "But before that, learn the ropes of\nthis job.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I6310000_J00800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It's a tough job, but do your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I will do my best!");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_13F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Toudou＊＊｝.");
            Voice_PlayVoice("I6310000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You're gonna be working here,\nhuh....");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...\nI look forward to working with you!");
            Character_BlinkStart(10, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I6310000_J01000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "... This job it tough.\nDo the best you can, without being\nhalf assed or quitting on the job.");
            Character_Chara_GS2(10, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... It seems intense.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
