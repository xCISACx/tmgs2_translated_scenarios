section "b04_m1_031"{
    int var0 = Date_GetDateOption(2, 4);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0401031_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "How nice...\nBeing here is like being in the\nmiddle of the ocean.");
        Message_MsgSel("It's as if it were Ryuujin's Palace!", "Ah, they are beautiful fish!", "This is sashimi heaven!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401031_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "If you're trying to make me call you\n\"Young Princess\", you'd better give\nup on the idea.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401031_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, pearl-spot chromis... right?\nI like this kind of fish, too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401031_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nThere was a delicious looking\nrudderfish.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0401031_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's magnificent seeing the sardines\nswim in a school too, isn't it?");
        Message_MsgSel("But in terms of cost, they seem the cheapest.", "I want to grill them with salt!", "So \"sardines\" are this beautiful.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0401031_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you a fishmonger or something?\nHm? Are they not that expensive...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401031_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "For me, I'd turn them into sashimi.\nWith ginger soy sauce.");
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
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401031_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt would be even better if we saw\nthem while in the ocean.\nI want to show you one day.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0401031_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, if you look around restlessly\nlike that, you'll get lost.");
        Message_MsgSel("There are too many things I want to see.", "If I do, we'll meet at the souvenir shop!", "Like a lost mermaid?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401031_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah... Are you a child or something?\nI'll walk in front, then.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(1, 2, (#1), 1);
            Voice_PlayVoice("B0401031_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.\nI'm going to go to that building\nthen.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401031_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 7, 1);
                Voice_PlayVoice("B0401031_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Kidding!");
                Character_ChFace(0, 7, 0);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401031_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't joke around like that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay, but you don't have to get\nthat angry...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
