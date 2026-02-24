section "w09_g3_000"{
    Voice_PlayVoice("W0912000_L00000", #1, "");
    Message_Who(12);
    Message_MsgDisp("Nishimoto", "*Sigh* Must be difficult with a lot\ngoing on.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Huh?");
    Character_BlinkStart(12, 3, (#1));
    Voice_PlayVoice("W0912000_L00100", #1, "");
    Message_Who(12);
    Message_MsgDisp("Nishimoto", "Oh, nothing!\nI'm just talking to myself...");
    Character_Chara_GS2(12, "NON");
    }
