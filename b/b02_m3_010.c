section "b02_m3_010"{
    if (Date_GetDateOption(4) == 1){
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 2);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("B0203010_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "............");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, what? What's the matter?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 3, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0203010_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I-It strangely...\nsuits you, doesn't it? ...\nNo, whatever is fine!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Haha, it seems like\n｛Hikami＊＊｝ likes this\nswimsuit.)");
        Message_CloseMsg();
        Character_Chara_GS2(3, "M3_09F", 0, 1, 0);
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_GetDateOption(4) == 2){
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(3, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0203010_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nSo there really are people who buy\nsuch things.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap...\nIt seems like he doesn't like this\nswimsuit.)");
        Message_CloseMsg();
        Character_Chara_GS2(3, "M3_09F", 0, 1, 0);
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, 1);
        }
    }
