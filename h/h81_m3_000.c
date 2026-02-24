section "h81_m3_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I will join the Student\nCouncil!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    if (Parameter_GetCh1Param(3, 514) != 1){
        System_Call_GS2("A02", "M3", 200);
        }
    else {
        Parameter_AddCh1Param(3, 86, 1);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Starting today, I will be your\ncolleague in the Student Council,\n｛主人公姓名｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nPlease treat me well!");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H7103000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Same here.\nThis is a job worth doing.");
            Character_Chara_GS2(3, "NON");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Starting today, I will be your\ncolleague in the Student Council,\n｛主人公姓名｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nSince I've joined, please treat me\nwell!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7103000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You can ask me anything.\nYou seem promising.\nLet us work together for the school.");
            Character_Chara_GS2(3, "NON");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "H7103000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nWhat are you doing here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nStarting today, I'll be your\ncolleague in the Student Council.\nPlease treat me well!");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7103000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Eh, you? I see. I'm glad. Ah, no...\nYou seem promising.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H7103000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "With someone like you here, the\nStudent Council's activities should\nimprove.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? That's a little embarrassing.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H7103000_C00500", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, that is the kind of enthusiasm\nthat I am expecting from you.\nI look forward to it,\n｛主人公｝.");
            Character_Chara_GS2(3, "NON");
            }
        }
    System_Call_GS2("H81", "G2", 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_GlobalWork(0, 0, 0);
    }
