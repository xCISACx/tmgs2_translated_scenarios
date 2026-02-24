section "h36_m1_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("H3601000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You got 1st place. Congrats.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks, ｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("H3601000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Anyway...\nEven though it was practice, I'm\nglad you won....\nYou've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I won!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("H3601000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You won.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, yay!\nThanks for cheering me on too,\n｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("H3601000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "There's no doubt that you're the\nMVP, right?\nI... was watching.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3601000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You worked hard training, didn't\nyou?\nIt shows. You've done well....\nCongrats.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I did my best!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("H3601000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Bad luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H3601000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, it's just a practice game...\nYou'll do better next time, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        else {
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("H3601000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Bad luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H3601000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Don't lose heart....\nIt wasn't your fault, okay?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3601000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You should just try harder next\ntime, right?\nThat's what practice matches are\nfor....\nCheer up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Thanks, ｛Saeki＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That was unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
