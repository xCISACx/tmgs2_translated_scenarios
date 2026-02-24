section "h44_m3_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nDid you come here to cheer for the\nBaseball Club?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4403000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI am also here on a Student Council\njob.\nI came here to observe club\nactivities.\nSo I won't be cheering much.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am also inspecting the\nCheerleading Club.\nI won't just be watching the game, I\nwill be watching you, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nDid you come here to cheer for the\nBaseball Club?");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H4403000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, I am not.\nRather, I am here to see the\nCheerleading Club's...\nor more correctly, to cheer you on.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?\nYou are cheering on a cheerleader?");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("H4403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That is... right.\nI do not mind if you think of it\nthat way.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Also, cheering on a cheerleader\nshould also help the Baseball Club.\nSo, please do your best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh... Ah, right.\nYeah, I will do my best!");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nAre you here to cheer on the Track\nand Field Club?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, but it is my turn to observe\nclub activities.\nI must write up a report.");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There are a lot of Track and Field\nevents.\nI cannot miss them, so I will make\nit a point to look out for you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nAre you here to cheer on the Track\nand Field Club?");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("H4403000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, I am not.\nI came here to see you... rather!\nI came here to cheer on the\nCheerleading Club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?\nMeaning that you are cheering on the\ncheerleaders?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H4403000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... R-Right!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4403000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hanegasaki's Student Council\nexecutives will cheer on the Track\nand Field Club, as well as the\nCheerleading Club.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H4403000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So it is not a strange thing, even\nif I cheer for you....\nDo your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(........ Ah, I see. Okay, I got it!\nI'll do my best!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
