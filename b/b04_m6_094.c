section "b04_m6_094"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP440_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_440_000", 127, 40);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("B0406090_F04500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "W-Wow... This art... What is it?");
        }
    else {
        Voice_PlayVoice("B0406090_F04600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "This... Is it art?");
        }
    Message_MsgSel("It seems like it's from a horror movie.", "It feels noble.", "I lost my appetite...");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406090_F04700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I-It does, doesn't it? ...\nIt didn't move, did it?");
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Message_PauseSkinship();
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F04800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I would rather a horror movie......\nUgh, did it move? Look.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 1:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0406090_F04900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "No, not at all.... Oh, I'm sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0406090_F05000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It really doesn't.\nI absolutely don't think so.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            }
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F05100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, entirely. Let's go soon.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F05200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I hear that, let's go!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
