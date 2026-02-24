section "b03_m1_200"{
    if (Date_ChkDateOpen(15) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301200_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As expected, the beach is nice.\nSo let's meet back here after we\nchange.\nSee you later.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M1", 1) == 0){
            System_Call_GS2("B04", "M1", 201);
            }
        else {
            System_Call_GS2("B05", "M1", 1);
            }
        }
    else if (Date_ChkDateOpen(16) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301200_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah! This feels nice.\nThere are only a few people.\nThe beach during winter is nice.");
        Message_ResumeSkinship();
        Voice_PlayVoice("B0301200_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's walk along the coast.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 202);
        }
    }
