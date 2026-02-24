section "b04_m1_191"{
    int var0 = Date_GetDateOption(2, 61);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401191_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Amazing.\nThe ground is completely covered\nwith fallen leaves.");
        Message_MsgSel("The leaves look like a baby's hand.", "The red and yellow trees are beautiful.", "Ah! There's a bagworm!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401191_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I often hear people say that....\nDo they really look that alike?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401191_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, that's definitely true.\nIf you look closely, some are\ntransparent.\nIt's beautiful.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401191_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "There would be bagworms, at least.\nWe're on a mountain.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401191_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Seeing the entire mountain in fall\ncolors is overwhelming, as\nexpected...");
        Message_MsgSel("It was worth painfully climbing the mountain.", "There are places that have no fall colors.", "It's Mother Nature's greatest art.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401191_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe.\nIf there weren't any fall colors\nhere, you'd be depressed.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401191_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401191_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're kinda like a sightseeing\nguide.\nBut I really think so too.");
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
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401191_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You'll understand if you come to the\ntop of the mountain, that it\ndefinitely is fall...");
        Message_MsgSel("It'll get colder from here on.", "I know that from the smell of baking yams.", "The blue sky is pretty...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401191_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Then it'd be winter again.\nWill winter come...?");
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
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401191_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey you, when people are being\nsentimental, try and go along with\nit, sometimes...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401191_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Do you like baked yams that much?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401191_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I see... So girls generally like it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401191_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sangosho has lots of female\ncustomers, so I'm thinking of making\na sweet potato dessert.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, that might be a nice idea!\nAs expected of you,\n｛Saeki＊＊｝!");
                Voice_PlayVoice("B0401191_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Whatever. It's just an idea...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is really\nenthusiastic when he's thinking\nabout Sangosho...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401191_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're right.\nOnly the color of the sky is.\nFall is nice.");
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
    Effect_CloseParticle();
    }
