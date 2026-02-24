section "b04_m1_080"{
    int var0 = Date_GetDateOption(2, 24);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0401080_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This seasonal feeling is nice...");
        Message_MsgSel("I'm happy being surrounded by flowers▼", "All these plants make the air so fresh!", "That fruit looks yummy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0401080_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nIt seems like there are things\nsprouting in your head, too...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401080_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. The air smells like summer.\nI like this place.\nWe should've come here earlier.");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401080_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, you're right.\nIt seems like it'd look good on our\ndessert plates.");
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
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0401080_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This place...\nNo matter when we come here, it's\nquiet.\nI just unintentionally lower my\nvoice.");
        Message_MsgSel("Probably because it's unpopular.", "It has a scary and mysterious feeling.", "Then I'll sing in a loud voice!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401080_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe.\nI really like this place, though.\nIt's like we're on a jungle\nexpedition.");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401080_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt's like we're in a tropical\njungle...\nIt makes me want to go exploring!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401080_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", ".........\nDo you feel like you're in the wild?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0401080_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey... This white fluffy thing...\nIt's a cactus, right?");
        Message_MsgSel("It's called an Old Lady Cactus.", "They talked to it, as they were raising it.", "It looks like a stuffed toy!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401080_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh...\nWell it certainly looks like my\ngrandpa's white hair.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401080_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You're kidding, right...?\nWho would do that kinda thing?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401080_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I sometimes hear people say that,\nbut it sounds like a lie.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I wonder...");
                Voice_PlayVoice("B0401080_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "How are cacti supposed to hear in\nthe first place?\nThey don't have ears.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's true, but...\nThere might be a scientific reason\nfor doing it, you know?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401080_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "As if.\nIt's just a delusional idea created\nby a fairy-tale freak.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez, you don't have any dreams!\nYou don't have to look at it then,\n｛Saeki＊＊｝!");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401080_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Then you can, uhh...\nYou can go get your head stabbed by\nthat prickly cactus!");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401080_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "My comeback kinda failed...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I won!)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401080_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nEven if you sat on it, it seems like\nit wouldn't hurt.");
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
