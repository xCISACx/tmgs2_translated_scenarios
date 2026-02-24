section "b04_m8_130"{
    int var0 = System_Randam(0, 100);
    if (var0 <= 50){
        Date_GetDateOption(2, 33);
        }
    else {
        Date_GetDateOption(1, 33);
        }
    if (Date_GetDateOption(1, 33) == 0){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NES10_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_NE_S10_000", 127, 40);
        Voice_PlayVoice("B0408010_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "How about this?");
        Message_MsgSel("Okay, I'll try it out!", "What should I do? I'm not sure.", "Hmm, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(8, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408010_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Always try choosing something\ndifferent, but would suit you well.\nYeah.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408010_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But I thought you could try dressing\nmore stylish～.\nWell, let's look at other things.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0408010_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hey, seriously? ...\nSo my good taste doesn't pass with a\nhigh school student anymore...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NES10_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_NE_S10_000", 127, 40);
        Voice_PlayVoice("B0408010_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oi, hey, what about this?\nIt suits your image.");
        Message_MsgSel("Okay, I'll try it out!", "What should I do? I'm not sure.", "Hmm, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(8, 2, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0408010_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... That's bad.\nI didn't think you'd take it\nseriously.\nIt's a joke. A joke.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408010_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Bahaha! Why worry～?\nYou know this is the size for a\ngrade school student?\nIt's just a joke! A joke!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_BlinkStart(8, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408010_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Rats.\nYeah, even you knew my statement\nabout this wasn't right.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
