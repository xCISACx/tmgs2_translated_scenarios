section "b04_m5_031"{
    int var0 = Date_GetDateOption(2, 4);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0405031_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow.\nThere are heaps of fish in this\nlarge fish tank.");
        Message_MsgSel("It's as if it were Ryuujin's Palace!", "Ah, they are beautiful fish!", "This is sashimi heaven!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0405031_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Roux? You're going to eat roux?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405031_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're right.\nThey're really sparkling～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405031_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "All these fish here can be eaten?\nEhh, you're well informed.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0405031_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow... This fish is smiling...");
        Message_MsgSel("Isn't that impossible?", "Ahaha, you're right!", "It looks like you, ｛Chris＊＊｝...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405031_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's bad to say that before you take\na look at it～.\nDon't humans have to experience\neverything?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405031_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right?\nI wonder if there are any other fish\nthat do this.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405031_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nIs it because I'm always smiling...?\nBut smiles are important～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0405031_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nI wonder if an older girl in a\nswimsuit will come floating this\nway.");
        Message_MsgSel("There are mermaids over there.", "The person in charge of feeding is here...", "You're a dummy, for real...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405031_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you mean the dugongs?\nThose guys have cute eyes.\nLet's go see them.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405031_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nBut they're not always older girls.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405031_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ahaha, right.\nThey're not always older girls.");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405031_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I see.\nThese fish only get to eat at\ncertain times, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("B0405031_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So to some extent, I'm like these\nfish, but it doesn't feel like they\nare constrained...");
                Voice_PlayVoice("B0405031_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They should be thankful that they\nare allowed to swim so freely...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405031_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nThis is bad, I went on a little\ntrip.\nDon't worry about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...\nI wonder if he has any troubles...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405031_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Whoa!\nWhen did you remember those words?\nIt was strange that you delivered\nthem well.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
