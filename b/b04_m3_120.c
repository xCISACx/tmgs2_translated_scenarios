section "b04_m3_120"{
    int var0 = System_Randam(0, 100);
    if (var0 <= 50){
        Date_GetDateOption(2, 32);
        }
    else {
        Date_GetDateOption(1, 32);
        }
    if (Date_GetDateOption(1, 32) == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403010_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... What about this?\nDoesn't it suit you quite well?");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403010_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, please do so if you like it....\nI'm relieved.\nMy tastes are not that bad after\nall.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403010_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... So you do not like it.\nWell, I have no intention of forcing\nmy tastes onto you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0403010_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see...\nFrom now on, I will try not to\ninterrupt you while shopping.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403010_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", ".........\nThis store has things such as this,\ntoo.");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403010_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Eh, do you like things like this?\n...\nWhat I wanted to say was that there\nare strange things in this store.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403010_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIs this something you are unsure\nabout?\nI was going to tell you that they\nhad strange things in this store.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403010_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, I thought that this was\nclearly strange....\nI wonder who would buy such a thing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
