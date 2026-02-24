section "p24_m3_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "It's a little dark, so we'll shine a\npenlight over where we walk.\nThis way, please.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("P1403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah, thank you....\nIs this service always running?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, they are waiting for peoples'\neyes to get used to the dark.\nIt's a long wait, though.");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("P1403000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Hmm...\nYes, I can see the inside of the\nassembly hall well.\nThe sounds are amazing, but\nsurprisingly, it is quite in sync.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("P1403000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nOkay, there seems to be no problem.\nThanks to you, I've completed my\ncheck early.\nYou are smart.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!\nI was praised by,\n｛Hikami＊＊｝!)");
        }
    else {
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(3, "M3_01F", 0);
        Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "This is in front of the speaker!");
        Voice_PlayVoice("P1403000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I cannot hear what you are saying at\nall!\nIs there a quieter place?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? What?");
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("P1403000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Enough already!\nAs expected, a disco is not\nappropriate for Culture Festivals.");
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("P1403000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Operate this place with a lower\nvolume!\nI will excuse myself!");
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I should have paid more\nattention...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
