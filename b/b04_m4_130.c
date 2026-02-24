section "b04_m4_130"{
    int var0 = System_Randam(0, 100);
    if (var0 <= 50){
        Date_GetDateOption(2, 33);
        }
    else {
        Date_GetDateOption(1, 33);
        }
    if (Date_GetDateOption(1, 33) == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NES10_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_NE_S10_000", 127, 40);
        Voice_PlayVoice("B0404010_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, this looks good!\nDon't you think this will suit you\nperfectly?");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404010_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You do have good eyes.\nThere's nothing in here that won't\nsuit you, since I'm the one who's\ngonna be selecting!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404010_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's not a thing to be confused on.\nWell, let's go.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404010_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nWell, I can't help it if you can't\nunderstand my taste.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NES10_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_NE_S10_000", 127, 40);
        Voice_PlayVoice("B0404010_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, found something nice!\nDon't you think you'll look great in\nthis?");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404010_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Hey, seriously?\nWhat has happened to your senses?\nYou don't even get my fashion\nhints...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404010_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha!\nYou can't even follow a joke in this\nsituation?\nYou really are stupid!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404010_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It was a counterattack indeed!");
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
