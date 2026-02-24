section "b04_m1_211"{
    int var0 = Date_GetDateOption(2, 63);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401211_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I get the feeling that that giraffe\nover there has been looking this way\nfor some time now.");
        Message_MsgSel("Maybe it's bothered by us?", "It might be scared of you.", "Let's play the staredown game with it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401211_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Is that so...\nI get kinda annoyed when I'm being\nlooked at.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401211_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No... You're scarier. Surely.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401211_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It feels like the giraffe is already\nplaying the game.\nIt really is staring this way...");
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
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401211_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Penguins are really popular.\nThey've gathered a crowd.");
        Message_MsgSel("They look happy with all this attention.", "I want to try rubbing their heads!", "I wonder if Japan is too hot for them.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401211_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Really?\nGiven that, those guys are bad at\nentertaining us.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401211_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, me too.\nDoesn't it kinda seem like if we\nrubbed their heads, they'd be\nexpressionless, yet offended?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401211_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I dunno.\nI don't think I know about things\nthat were born in the South Pole.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401211_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Looking around the zoo like this,\ndon't you think that there are only\na few rare animals?");
        Message_MsgSel("Yes, according to the WHA...", "Aren't I good enough?", "But aren't the animals here cute?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401211_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What kind of person are you...?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0401211_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nI kinda don't get it, but are you\nsaying that you're a rare animal?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401211_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "W-What? You suddenly...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, am I not good enough?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401211_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I don't get what you're trying to\nsay...");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's fine then!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401211_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I-I don't know but... I'm...\nfine, with you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is\nembarrassed!)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401211_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. I think they're cute.\nBut I'd like a few more...\nwild animals.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
