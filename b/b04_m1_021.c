section "b04_m1_021"{
    int var0 = Date_GetDateOption(2, 1);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401021_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This place is still...\nbeing developed, isn't it?");
        Message_MsgSel("What a stylish place!", "Is there anything else to do here?", "I'd hate for nature to disappear!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401021_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A stylish place...\nWell, there are probably lots of\nother places that are stylish.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401021_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Just one thing to do is enough.\nI don't want any more people coming\nhere.\nI'm speaking selfishly of my\nhometown, though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401021_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Somewhat, yeah...\nLooking at it from the ocean, it'd\nbe sad to see the coastline\nchanging.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401021_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "...\nWalking by yourself isn't\nunpleasant.");
        Message_MsgSel("Isn't this freshness good, occasionally?", "It smells of the sea air.", "We also have to walk for our health.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401021_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, occasionally.\nNow then, let's walk near the coast,\ntoo!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401021_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Because we're close to the ocean.\nEven if the city renews itself with\nthe smell of the wind, I feel like\nthis is where I belong.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0401021_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you an old person or\nsomething...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401021_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "There are quite a few people here\naround at noon.\nI wonder if there are lots of people\nwith nothing to do.");
        Message_MsgSel("Wasted time is important, too.", "They might think of us in that way, too.", "And they're all couples, as well.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401021_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah... Well, that's probably right.\nYou've got no conviction...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401021_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's true.\nThe truth is that we've got nothing\nto do.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401021_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Now that you mention it...\nLet's go home.\nIt'd be bad to be an interference.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401021_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "W-Well, this place is that kinda\nspot...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see.");
                Character_BlinkStart(1, 0, (#1));
                Voice_PlayVoice("B0401021_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, well it's not like I know much\nabout it.\nSee, it's just...");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0401021_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Umm... right!\nThe customers were talking about\nit...");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401021_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Whatever, right? Let's go!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He's gotten peevish...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
