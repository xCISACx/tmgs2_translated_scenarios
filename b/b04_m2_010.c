section "b04_m2_010"{
    int var0;
    int var1 = System_Randam(0, 100);
    if (var1 <= 50){
        Date_GetDateOption(2, 0);
        }
    else {
        Date_GetDateOption(1, 0);
        }
    if (Date_GetDateOption(1, 0) == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        var0 = System_Randam(0, 100);
        if (var0 <= 50){
            Background_Bg_GS2("BG_WFS00_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_S00_000", 127, 40);
            }
        else if (var0 >= 51){
            Background_Bg_GS2("BG_WFS10_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_S10_000", 127, 40);
            }
        Voice_PlayVoice("B0402010_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Do you like this kinda thing?");
        Message_MsgSel("I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402010_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. I think it'd suit you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402010_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It was just a thought.\nYou should look at other stuff, too.");
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
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402010_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see. Forget it then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 2, (#1));
        var0 = System_Randam(0, 100);
        if (var0 <= 50){
            Background_Bg_GS2("BG_WFS00_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_S00_000", 127, 40);
            }
        else if (var0 >= 51){
            Background_Bg_GS2("BG_WFS10_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_S10_000", 127, 40);
            }
        Voice_PlayVoice("B0402010_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey... Don't you wanna try this on?");
        Message_MsgSel("I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0402010_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No, stop. I was kidding.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402010_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Oi, I was joking. Don't worry.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402010_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Good. Because I was kidding.");
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
