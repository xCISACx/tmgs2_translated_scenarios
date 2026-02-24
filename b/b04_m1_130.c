section "b04_m1_130"{
    int var0 = System_Randam(0, 100);
    if (var0 <= 50){
        Date_GetDateOption(2, 33);
        }
    else {
        Date_GetDateOption(1, 33);
        }
    if (Date_GetDateOption(1, 33) == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NES10_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_NE_S10_000", 127, 40);
        Voice_PlayVoice("B0401010_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, this.\nIt kinda looks like something you'd\nwear.");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401010_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, do that. It's sharp, isn't it?\nMy judgement.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401010_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What the...\nWell, I guess it comes down to\ntaste.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0401010_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey... Don't say it so bluntly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Background_Bg_GS2("BG_NES10_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_NE_S10_000", 127, 40);
        Voice_PlayVoice("B0401010_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, hey, that!\nIt suits you perfectly.");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401010_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Oi.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401010_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're hesitating over it!?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401010_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right, it's average.\nBut I kinda wanna see you wearing\nit.");
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
