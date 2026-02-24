section "b04_m4_032"{
    int var0 = Date_GetDateOption(2, 5);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0404032_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The orca is so huge～!");
        Message_MsgSel("I want to try riding on its back.", "It had appeal.", "It's also called a \"killer whale\".");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0404032_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oooh! I'd like that!\nBut, it's just the water...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404032_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, but that jump made me soaking\nwet!\nThat guy's performance was\nover-the-top!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404032_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ooh... huh? What, a killer whale?\nThis guy's exactly as I thought he'd\nbe!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0404032_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "These guys look smart, however...\nI wonder if they know human\nlanguage?");
        Message_MsgSel("They might just be attracted by the bait.", "I wonder if they're happy when applauded?", "You're smarter, ｛Hariya＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404032_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, but I want to appreciate\nthem...\nYou're just cold.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404032_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, I think they are happy when they\nget applause or cheering....\nI wonder if they get happy\naltogether?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404032_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I should say this! I'm smart.\nHowever, my grades are just a bit...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0404032_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh! Are they baiting the orca?");
        Message_MsgSel("They're quite used to humans and are cute.", "I'm getting hungry, too.", "They probably need a lot of bait.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404032_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Surely they probably had gone\nthrough lots of trouble before being\nhow they are now.\nThey're classy entertainers!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404032_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Then you should perform something,\ntoo.\nWon't you be able to get something\nyummy?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0404032_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You really are easy to read!");
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404032_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, I'll buy something then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, really!?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404032_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What's with that?\nIf you don't want to eat, then I'll\nstop.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I-I want to eat!");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404032_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Then say so in the first place.\nWell, you have to occasionally be\nfed～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Be fed... That's mean!\nTreating a person like an orca!");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0404032_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What are you saying?\nBeing fed is the orca's prize for\nthe performance, right?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404032_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nI won't accept you as a skilled one.");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404032_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "More or less, I do not intend to do\nthat kind of close feeding method.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, what?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404032_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nI mean that kind of method to get a\nprize just looks so unreal!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Prize? The orcas being fed?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0404032_D01900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "......\nStill needs a little of training....\n*Sigh*");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404032_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, since their bodies are so\nheavy, we can't do anything about\nit...\nI wonder how much they eat for\nlunch?");
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
